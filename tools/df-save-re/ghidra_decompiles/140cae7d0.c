// FUN_140cae7d0 @ 140cae7d0
// callees:
//   -> 140ca8390 FUN_140ca8390
//   -> 14073e930 FUN_14073e930
//   -> 140740200 FUN_140740200
//   -> 140004650 FUN_140004650


undefined4 FUN_140cae7d0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_140ca8390();
  if ((lVar3 != 0) && (cVar1 = FUN_14073e930(lVar3,param_2,0x16), cVar1 != '\0')) {
    return 1;
  }
  lVar3 = FUN_140ca8390(param_1);
  if ((((lVar3 != 0) && (iVar2 = FUN_140740200(lVar3,2), iVar2 != -1)) &&
      (lVar3 = FUN_140004650(&DAT_141d7a048,iVar2), lVar3 != 0)) &&
     (cVar1 = FUN_14073e930(lVar3,param_2,0x17), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

