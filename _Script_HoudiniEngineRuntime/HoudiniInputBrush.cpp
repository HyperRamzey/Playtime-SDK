#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Model.hpp"
#include "HoudiniInputActor.hpp"
#include "HoudiniInputBrush.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniInputBrush::get_BrushesInfo() {
    return (void*)((uintptr_t)this + 0x110);
}
bool _Script_HoudiniEngineRuntime::HoudiniInputBrush::get_bIgnoreInputObject() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 1 != 0;
}
_Script_Engine::Model*& _Script_HoudiniEngineRuntime::HoudiniInputBrush::get_CombinedModel() {
    return *(_Script_Engine::Model**)((uintptr_t)this + 0x120);
}
void _Script_HoudiniEngineRuntime::HoudiniInputBrush::set_bIgnoreInputObject(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniInputBrush::get_CachedInputBrushType() {
    return (void*)((uintptr_t)this + 0x129);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniInputBrush::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniInputBrush");
    return result;
}
