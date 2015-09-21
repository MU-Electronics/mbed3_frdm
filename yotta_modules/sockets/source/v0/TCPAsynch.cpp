/*
 * PackageLicenseDeclared: Apache-2.0
 * Copyright (c) 2015 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "Ticker.h"
#include "mbed-net-sockets/v0/TCPAsynch.h"
#include "mbed-net-socket-abstract/socket_api.h"

using namespace mbed::Sockets::v0;

uintptr_t TCPAsynch::_TCPSockets = 0;
Ticker TCPAsynch::_ticker;
mbed::util::FunctionPointer0<void> TCPAsynch::_tick_handler(NULL);

TCPAsynch::TCPAsynch(const socket_stack_t stack) :
        Socket(stack)
{
    _socket.family = SOCKET_STREAM;
    if (_TCPSockets == 0) {
        timestamp_t timeout = _socket.api->periodic_interval(&_socket) * 1000;
        void (*f)() = _socket.api->periodic_task(&_socket);
        _ticker.attach_us(f, timeout);
    }
    _TCPSockets++;
}
socket_error_t TCPAsynch::open(const socket_address_family_t af)
{
    socket_error_t err = Socket::open(af, SOCKET_STREAM);
    return err;
}

socket_error_t TCPAsynch::open(const socket_address_family_t af, const socket_proto_family_t pf)
{
    (void)af;
    (void)pf;
    return SOCKET_ERROR_UNIMPLEMENTED;
}

TCPAsynch::~TCPAsynch()
{
    _TCPSockets--;
    if (!_TCPSockets) {
        _ticker.detach();
    }
}
