#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionLightmapUVs.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionLightmapUVs::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionLightmapUVs");
    return result;
}