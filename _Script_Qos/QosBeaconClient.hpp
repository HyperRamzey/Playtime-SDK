#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_OnlineSubsystemUtils\OnlineBeaconClient.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Qos {
#pragma pack(push, 1)
struct QosBeaconClient : public _Script_OnlineSubsystemUtils::OnlineBeaconClient {
    private: char pad_2b0[0x38]; public:
    static _Script_CoreUObject::Class* static_class();
    void ServerQosRequest(void* InSessionId);
    void ClientQosResponse(void* Response);
}; // Size: 0x2e8
#pragma pack(pop)
}
