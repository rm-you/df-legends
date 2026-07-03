// FUN_140c17d60 @ 140c17d60
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140dfb9a8 `eh_vector_constructor_iterator'
//   -> 140c179c0 FUN_140c179c0


void FUN_140c17d60(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res18 [2];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1,(longlong)local_res18[0]);
  lVar4 = (longlong)(local_res18[0] + -1);
  if (-1 < local_res18[0] + -1) {
    do {
      pvVar1 = operator_new(0x420);
      _eh_vector_constructor_iterator_(pvVar1,0x58,0xc,FUN_140429ec0,FUN_140c17720);
      *(void **)(*param_1 + lVar4 * 8) = pvVar1;
      lVar2 = *(longlong *)(*param_1 + lVar4 * 8);
      lVar3 = 0xc;
      do {
        FUN_140c179c0(lVar2,param_2);
        lVar2 = lVar2 + 0x58;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}

