#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionTextureSampleParameter.hpp"
#include "MaterialExpressionTextureSampleParameterVolume.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionTextureSampleParameterVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionTextureSampleParameterVolume");
    return result;
}
