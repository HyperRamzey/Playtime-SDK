#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionAdd.hpp"
float& _Script_Engine::MaterialExpressionAdd::get_ConstA() {
    return *(float*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::MaterialExpressionAdd::get_A() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_Engine::MaterialExpressionAdd::get_ConstB() {
    return *(float*)((uintptr_t)this + 0x6c);
}
void* _Script_Engine::MaterialExpressionAdd::get_B() {
    return (void*)((uintptr_t)this + 0x54);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionAdd::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionAdd");
    return result;
}
