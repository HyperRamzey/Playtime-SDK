#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnyButtonInputBehavior.hpp"
#include "MultiClickSequenceInputBehavior.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::MultiClickSequenceInputBehavior::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.MultiClickSequenceInputBehavior");
    return result;
}
