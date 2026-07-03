// FUN_140d74b10 @ 140d74b10
// callees:
//   -> 140019bb0 FUN_140019bb0


longlong FUN_140d74b10(longlong param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  short local_res8 [16];
  short local_18 [8];
  
  FUN_140019bb0(param_1,local_18,local_res8,param_2,param_3,param_4);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x119b60) + 0xe8);
  while( true ) {
    if (*(longlong **)(*(longlong *)(param_1 + 0x119b60) + 0xf0) <= plVar2) {
      return 0;
    }
    lVar1 = *plVar2;
    if ((*(short *)(lVar1 + 0x12e4) == local_18[0]) && (*(short *)(lVar1 + 0x12e6) == local_res8[0])
       ) break;
    plVar2 = plVar2 + 1;
  }
  return lVar1;
}

