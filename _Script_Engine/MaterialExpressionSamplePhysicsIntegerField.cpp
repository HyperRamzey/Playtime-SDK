#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionSamplePhysicsIntegerField.hpp"
void* _Script_Engine::MaterialExpressionSamplePhysicsIntegerField::get_WorldPosition() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionSamplePhysicsIntegerField::get_FieldTarget() {
    return (void*)((uintptr_t)this + 0x54);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionSamplePhysicsIntegerField::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionSamplePhysicsIntegerField");
    return result;
}
