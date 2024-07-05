#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LandscapeComponent.hpp"
#include "LandscapeWeightmapUsage.hpp"
_Script_Landscape::LandscapeComponent*& _Script_Landscape::LandscapeWeightmapUsage::get_ChannelUsage() {
    return *(_Script_Landscape::LandscapeComponent**)((uintptr_t)this + 0x28);
}
void* _Script_Landscape::LandscapeWeightmapUsage::get_LayerGuid() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeWeightmapUsage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeWeightmapUsage");
    return result;
}
