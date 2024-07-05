#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_OnlineSubsystemUtils\OnlineBeaconHostObject.hpp"
#include "QosBeaconHost.hpp"
_Script_CoreUObject::Class* _Script_Qos::QosBeaconHost::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Qos.QosBeaconHost");
    return result;
}
