#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithDecalComponentTemplate.hpp"
#include "DatasmithObjectTemplate.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
int32_t& _Script_DatasmithContent::DatasmithDecalComponentTemplate::get_SortOrder() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
_Script_Engine::MaterialInterface*& _Script_DatasmithContent::DatasmithDecalComponentTemplate::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x40);
}
void* _Script_DatasmithContent::DatasmithDecalComponentTemplate::get_DecalSize() {
    return (void*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithDecalComponentTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithDecalComponentTemplate");
    return result;
}
