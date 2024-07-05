#include "..\FUObjectArray.hpp"
#include "BPI_EscapeInputCapturingPrompt_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
_Script_CoreUObject::Class* _Game_Interface_BPI_EscapeInputCapturingPrompt::BPI_EscapeInputCapturingPrompt_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Interface/BPI_EscapeInputCapturingPrompt.BPI_EscapeInputCapturingPrompt_C");
    return result;
}
void _Game_Interface_BPI_EscapeInputCapturingPrompt::BPI_EscapeInputCapturingPrompt_C::OnEscapeInputCapture() {
    return;
}
