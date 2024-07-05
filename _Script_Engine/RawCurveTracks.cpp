#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RawCurveTracks.hpp"
_Script_CoreUObject::Class* _Script_Engine::RawCurveTracks::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RawCurveTracks");
    return result;
}
void* _Script_Engine::RawCurveTracks::get_FloatCurves() {
    return (void*)((uintptr_t)this + 0x0);
}
