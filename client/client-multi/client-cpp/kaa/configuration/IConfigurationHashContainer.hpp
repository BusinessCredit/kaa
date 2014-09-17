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

#ifndef ICONFIGURATIONHASHCONTAINER_HPP_
#define ICONFIGURATIONHASHCONTAINER_HPP_

#include <boost/shared_ptr.hpp>

#include "kaa/common/EndpointObjectHash.hpp"

namespace kaa {

class IConfigurationHashContainer;
typedef boost::shared_ptr<IConfigurationHashContainer> IConfigurationHashContainerPtr;

/**
 * Container for the configuration data hash.
 */
class IConfigurationHashContainer {
public:

    /**
     * Retrieves configuration data hash.
     *
     * @see EndpointObjectHash
     *
     */
    virtual EndpointObjectHash getConfigurationHash() = 0;

    virtual ~IConfigurationHashContainer() {}
};

}  // namespace kaa


#endif /* ICONFIGURATIONHASHCONTAINER_HPP_ */