#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionSkyAtmosphereLightIlluminance.hpp"
int32_t& _Script_Engine::MaterialExpressionSkyAtmosphereLightIlluminance::get_LightIndex() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionSkyAtmosphereLightIlluminance::get_WorldPosition() {
    return (void*)((uintptr_t)this + 0x44);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionSkyAtmosphereLightIlluminance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionSkyAtmosphereLightIlluminance");
    return result;
}
