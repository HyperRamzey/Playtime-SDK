#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TimedDataChannelSampleTime.hpp"
_Script_CoreUObject::Class* _Script_TimeManagement::TimedDataChannelSampleTime::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/TimeManagement.TimedDataChannelSampleTime");
    return result;
}
