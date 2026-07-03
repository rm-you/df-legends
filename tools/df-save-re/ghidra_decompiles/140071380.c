// FUN_140071380 @ 140071380
// callees:
//   -> 140071430 FUN_140071430


void FUN_140071380(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_140071430(param_1,param_2,0,*puVar1);
  return;
}

