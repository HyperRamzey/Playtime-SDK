#include "FName.hpp"
std::wstring FName::ToString() {
    using ToStringFn = TArray<wchar_t>* (*)(const FName*, TArray<wchar_t>*);
    static const auto module = GetModuleHandleA("Playtime_Multiplayer-Win64-Shipping.exe");
    static const auto offset = 0x1403a70;
    static const auto fn = (ToStringFn)((uintptr_t)module + offset);
    static TArray<wchar_t> arr{};
    fn(this, &arr);
    return std::wstring(arr.data, arr.count);
}
