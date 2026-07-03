// FUN_140db5d70 @ 140db5d70
// callees:
//   -> 140019bb0 FUN_140019bb0


undefined1 FUN_140db5d70(longlong param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  short local_res8 [16];
  short local_18 [8];
  
  FUN_140019bb0(param_1,local_res8,local_18,param_2,param_3,param_4);
  return (&DAT_14155b2e0)
         [(longlong)
          (short)(local_res8[0] +
                 (1 - (short)((int)(*(int *)(param_1 + 0x1160f0) +
                                   (*(int *)(param_1 + 0x1160f0) >> 0x1f & 0xfU)) >> 4))) * 5 +
          (longlong)
          (short)(local_18[0] +
                 (1 - (short)((int)(*(int *)(param_1 + 0x1160f4) +
                                   (*(int *)(param_1 + 0x1160f4) >> 0x1f & 0xfU)) >> 4)))];
}

