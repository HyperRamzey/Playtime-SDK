#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "WeightmapData.hpp"
void* _Script_Landscape::WeightmapData::get_Textures() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Landscape::WeightmapData::get_LayerAllocations() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Landscape::WeightmapData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.WeightmapData");
    return result;
}
void* _Script_Landscape::WeightmapData::get_TextureUsages() {
    return (void*)((uintptr_t)this + 0x20);
}
