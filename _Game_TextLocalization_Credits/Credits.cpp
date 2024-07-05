#include "..\FUObjectArray.hpp"
#include "Credits.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_TextLocalization_Credits::Credits::get_SectionName_6_680BF05A4B7ED7C11897D6B0C9915EB6() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Game_TextLocalization_Credits::Credits::get_Names_3_14E5EDD247E3C17E1F01079B3B584E7E() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Game_TextLocalization_Credits::Credits::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/TextLocalization/Credits.Credits");
    return result;
}
