#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionDepthOfFieldFunction.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionDepthOfFieldFunction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionDepthOfFieldFunction");
    return result;
}
void* _Script_Engine::MaterialExpressionDepthOfFieldFunction::get_Depth() {
    return (void*)((uintptr_t)this + 0x44);
}
void* _Script_Engine::MaterialExpressionDepthOfFieldFunction::get_FunctionValue() {
    return (void*)((uintptr_t)this + 0x40);
}