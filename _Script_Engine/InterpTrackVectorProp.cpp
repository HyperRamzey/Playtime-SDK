#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackVectorBase.hpp"
#include "InterpTrackVectorProp.hpp"
void* _Script_Engine::InterpTrackVectorProp::get_PropertyName() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackVectorProp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackVectorProp");
    return result;
}
