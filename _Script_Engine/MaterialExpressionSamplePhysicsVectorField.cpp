#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionSamplePhysicsVectorField.hpp"
void* _Script_Engine::MaterialExpressionSamplePhysicsVectorField::get_FieldTarget() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::MaterialExpressionSamplePhysicsVectorField::get_WorldPosition() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionSamplePhysicsVectorField::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionSamplePhysicsVectorField");
    return result;
}
