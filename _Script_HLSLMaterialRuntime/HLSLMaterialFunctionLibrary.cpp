#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "HLSLMaterialFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_HLSLMaterialRuntime::HLSLMaterialFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HLSLMaterialRuntime.HLSLMaterialFunctionLibrary");
    return result;
}
