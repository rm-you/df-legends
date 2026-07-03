// FUN_14007bdd0 @ 14007bdd0
// callees:


void FUN_14007bdd0(longlong *param_1,uint param_2)

{
  int iVar1;
  
  if (((-1 < (int)param_2) && (iVar1 = (int)param_2 >> 3, -1 < iVar1)) && (iVar1 < (int)param_1[1]))
  {
    *(byte *)(*param_1 + (longlong)iVar1) =
         *(byte *)(*param_1 + (longlong)iVar1) & ~(byte)(1 << (param_2 & 7));
  }
  return;
}

