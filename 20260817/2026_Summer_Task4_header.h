#pragma once
//================================================================
// 定数
//================================================================

//ボードのマス数
const int NUM_BOARDS = 9;
//さいころの面数
const int NUM_DICE = 6;
//振るさいころの数
const int NUM_DICE_ROLL = 2;
//確認するさいころの総数
const int NUM_DICE_TOTAL = NUM_DICE_ROLL + 1; 



//================================================================
// 関数
//================================================================

/// <summary>
/// ゲーム開始関数
/// </summary>
void StartGame();

/// <summary>
///ボードの初期化 
/// </summary>
/// <param name="board">取得マスのフラグ</param>
void InitializeBoard(bool board[]);

/// <summary>
/// さいころを振る
/// </summary>
/// <param name="dice">さいころの結果</param>
void RollDice(int dice[]);

/// <summary>
/// さいころの結果を表示
/// </summary>
/// <param name="dice">さいころの結果</param>
void DisplayDiceResults(int dice[]);

/// <summary>
/// 取得できるマスがあるか確認
/// </summary>
/// <param name="board">ボードの状態</param>
/// <param name="dice">さいころの結果</param>
/// <returns>取得できるマスがある場合true、ない場合false</returns>
bool CanSelectAnyBoard(bool board[], int dice[]);

/// <summary>
/// 取得するマスを選択
/// </summary>
/// <param name="board">ボードの状態</param>
/// <param name="dice">さいころの結果</param>
/// <returns>選択されたマスのインデックス</returns>
int SelectBoard(bool board[], int dice[]);

/// <summary>
/// プレイヤーが取得するマスを選択
/// </summary>
/// <param name="board">ボードの状態</param>
/// <param name="dice">さいころの結果</param>
/// <returns>選択されたマスのインデックス</returns>
int SelectPlayerBoard(bool board[], int dice[]);

/// <summary>
/// CPUが取得するマスを選択
/// </summary>
/// <param name="board">ボードの状態</param>
/// <param name="dice">さいころの結果</param>
/// <returns>選択されたマスのインデックス</returns>
int SelectCPUBoard(bool board[], int dice[]);

/// <summary>
/// マスを取得
/// </summary>
/// <param name="board">ボードの状態</param>
/// <param name="index">取得するマスのインデックス</param>
void ClaimBoard(bool board[], int index);

/// <summary>
/// 全てのマスが取得されたか確認
/// </summary>
/// <param name="board">ボードの状態</param>
/// <returns>全てのマスが取得された場合true、そうでない場合false</returns>
bool IsAllBoardsClaimed(bool board[]);

/// <summary>
/// 取得可能なマスを表示
/// </summary>
/// <param name="board">ボードの状態</param>
void DisplayAvailableBoards(bool board[]);

