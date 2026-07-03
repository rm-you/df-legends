// FUN_1400de3a0 @ 1400de3a0
// callees:


ulonglong FUN_1400de3a0(longlong param_1)

{
  byte *pbVar1;
  
  if (((*(int *)(param_1 + 0xd0) < 1) || (pbVar1 = *(byte **)(param_1 + 200), (*pbVar1 & 0x80) == 0)
      ) && (((pbVar1 = (byte *)0x0, *(longlong *)(param_1 + 0x130) == 0 ||
             (pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x130) + 0x48), pbVar1 == (byte *)0x0)) ||
            ((*(longlong *)(pbVar1 + 0x130) == 0 &&
             (((pbVar1[0x54] & 1) != 0 || ((pbVar1[0x50] & 1) == 0)))))))) {
    return CONCAT71((int7)((ulonglong)pbVar1 >> 8),1);
  }
  return (ulonglong)pbVar1 & 0xffffffffffffff00;
}

