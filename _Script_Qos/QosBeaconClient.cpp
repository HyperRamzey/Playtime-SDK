#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_OnlineSubsystemUtils\OnlineBeaconClient.hpp"
#include "QosBeaconClient.hpp"
_Script_CoreUObject::Class* _Script_Qos::QosBeaconClient::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Qos.QosBeaconClient");
    return result;
}
void _Script_Qos::QosBeaconClient::ServerQosRequest(void* InSessionId) {
    return;
}
void _Script_Qos::QosBeaconClient::ClientQosResponse(void* Response) {
    return;
}
