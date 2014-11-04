/*
 * Copyright 2014 CyberVision, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef IEVENTLISTENERSRESOLVER_HPP_
#define IEVENTLISTENERSRESOLVER_HPP_

#include "kaa/KaaDefaults.hpp"

#ifdef KAA_USE_EVENTS

#include <list>
#include <string>

namespace kaa {

class IFetchEventListeners;

class IEventListenersResolver {
public:
    /**
     * Submits an event listeners resolution request
     *
     * @param eventFQNs     List of event class FQNs which have to be supported by endpoint.
     * @param listener      Result listener {@link IFetchEventListeners}}
     *
     * @throw KaaException when data is invalid (empty list or null listener)
     *
     * @return Request ID of submitted request
     */
    virtual std::string findEventListeners(const std::list<std::string>& eventFQNs
            , IFetchEventListeners* listener) = 0;

    virtual ~IEventListenersResolver() {}
};

} /* namespace kaa */

#endif

#endif /* IEVENTLISTENERSRESOLVER_HPP_ */
