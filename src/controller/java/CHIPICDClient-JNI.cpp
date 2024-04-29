/*
 *   Copyright (c) 2024 Project CHIP Authors
 *   All rights reserved.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 */
#include "AndroidICDClient.h"

#include <platform/PlatformManager.h>

#define JNI_METHOD(RETURN, METHOD_NAME) extern "C" JNIEXPORT RETURN JNICALL Java_chip_devicecontroller_ChipICDClient_##METHOD_NAME

JNI_METHOD(jobject, getICDClientInfo)(JNIEnv * env, jobject self, jint jFabricIndex)
{
    chip::DeviceLayer::StackLock lock;

    return getICDClientInfo(env, "chip/devicecontroller/ICDClientInfo", jFabricIndex);
}
