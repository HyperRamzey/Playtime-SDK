#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LandscapeLayerBrush.hpp"
_Script_CoreUObject::Class* _Script_Landscape::LandscapeLayerBrush::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.LandscapeLayerBrush");
    return result;
}
