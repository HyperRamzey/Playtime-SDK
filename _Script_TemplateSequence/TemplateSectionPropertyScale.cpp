#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TemplateSectionPropertyScale.hpp"
void* _Script_TemplateSequence::TemplateSectionPropertyScale::get_ObjectBinding() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_TemplateSequence::TemplateSectionPropertyScale::get_PropertyBinding() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_TemplateSequence::TemplateSectionPropertyScale::get_PropertyScaleType() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_TemplateSequence::TemplateSectionPropertyScale::get_FloatChannel() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_TemplateSequence::TemplateSectionPropertyScale::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/TemplateSequence.TemplateSectionPropertyScale");
    return result;
}
