// FUN_140480880 @ 140480880
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14000c780 FUN_14000c780


undefined1 * FUN_140480880(undefined8 param_1,undefined1 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = DAT_141ece158;
  puVar2 = DAT_141ece158;
  puVar4 = (undefined8 *)DAT_141ece158[1];
  if (*(char *)((longlong)DAT_141ece158[1] + 0x19) == '\0') {
    do {
      puVar3 = puVar4;
      if (*(int *)(puVar3 + 4) < param_3) {
        puVar4 = (undefined8 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        puVar4 = (undefined8 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar4 + 0x19) == '\0');
    if ((puVar3 != DAT_141ece158) && (*(int *)(puVar3 + 4) <= param_3)) goto LAB_1404808cb;
  }
  puVar3 = DAT_141ece158;
LAB_1404808cb:
  *(undefined8 *)(param_2 + 0x18) = 0xf;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  if (puVar3 != puVar1) {
    FUN_14000c8b0(param_2,puVar3 + 5,0,0xffffffffffffffff);
    return param_2;
  }
  FUN_14000c780(param_2,"NO BINDING",10,0,0);
  return param_2;
}

