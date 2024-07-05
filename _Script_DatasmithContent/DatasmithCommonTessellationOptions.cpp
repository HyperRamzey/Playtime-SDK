#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithCommonTessellationOptions.hpp"
#include "DatasmithOptionsBase.hpp"
void* _Script_DatasmithContent::DatasmithCommonTessellationOptions::get_Options() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithCommonTessellationOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithCommonTessellationOptions");
    return result;
}
