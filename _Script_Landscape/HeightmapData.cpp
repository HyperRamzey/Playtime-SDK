#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "HeightmapData.hpp"
_Script_Engine::Texture2D*& _Script_Landscape::HeightmapData::get_Texture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Landscape::HeightmapData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.HeightmapData");
    return result;
}
