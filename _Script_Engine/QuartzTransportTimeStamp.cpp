#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "QuartzTransportTimeStamp.hpp"
int32_t& _Script_Engine::QuartzTransportTimeStamp::get_Bars() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::QuartzTransportTimeStamp::get_BeatFraction() {
    return *(float*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Engine::QuartzTransportTimeStamp::get_Beat() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::QuartzTransportTimeStamp::get_Seconds() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Engine::QuartzTransportTimeStamp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.QuartzTransportTimeStamp");
    return result;
}
