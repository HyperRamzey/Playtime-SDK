#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionTextureSampleParameter.hpp"
#include "MaterialExpressionTextureSampleParameter2DArray.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionTextureSampleParameter2DArray::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionTextureSampleParameter2DArray");
    return result;
}
