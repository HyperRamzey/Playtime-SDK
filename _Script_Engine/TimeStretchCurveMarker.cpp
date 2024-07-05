#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TimeStretchCurveMarker.hpp"
float& _Script_Engine::TimeStretchCurveMarker::get_Time() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::TimeStretchCurveMarker::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TimeStretchCurveMarker");
    return result;
}
float& _Script_Engine::TimeStretchCurveMarker::get_Alpha() {
    return *(float*)((uintptr_t)this + 0xc);
}
