#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Brush.hpp"
#include "BrushShape.hpp"
_Script_CoreUObject::Class* _Script_Engine::BrushShape::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.BrushShape");
    return result;
}