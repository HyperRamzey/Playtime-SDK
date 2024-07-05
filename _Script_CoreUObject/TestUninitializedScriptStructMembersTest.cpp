#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Object.hpp"
#include "TestUninitializedScriptStructMembersTest.hpp"
_Script_CoreUObject::Object*& _Script_CoreUObject::TestUninitializedScriptStructMembersTest::get_InitializedObjectReference() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Object*& _Script_CoreUObject::TestUninitializedScriptStructMembersTest::get_UninitializedObjectReference() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x0);
}
float& _Script_CoreUObject::TestUninitializedScriptStructMembersTest::get_UnusedValue() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_CoreUObject::TestUninitializedScriptStructMembersTest::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.TestUninitializedScriptStructMembersTest");
    return result;
}
