#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionDistanceFieldsRenderingSwitch.hpp"
void* _Script_Engine::MaterialExpressionDistanceFieldsRenderingSwitch::get_No() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionDistanceFieldsRenderingSwitch::get_Yes() {
    return (void*)((uintptr_t)this + 0x54);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionDistanceFieldsRenderingSwitch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionDistanceFieldsRenderingSwitch");
    return result;
}
