#include "..\FUObjectArray.hpp"
#include "PatchNotes.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_TextLocalization_PatchNotes::PatchNotes::get_SectionName_6_680BF05A4B7ED7C11897D6B0C9915EB6() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Game_TextLocalization_PatchNotes::PatchNotes::get_Names_7_14E5EDD247E3C17E1F01079B3B584E7E() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Game_TextLocalization_PatchNotes::PatchNotes::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/TextLocalization/PatchNotes.PatchNotes");
    return result;
}
