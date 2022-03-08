#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int menu = 0;
    int money = 0;
    int add_money = 0;
    int add = 0;
    int flag = 0;
    int item[6] = {3,3,3,3,3,3};
    int total_money = 0;

    printf("금액을 넣어주세요 : ");
    scanf("%d",&money);

    while(!flag){
        system("cls");

        printf("------------- 자판기 ---------------------\n");
        printf("\n1.아메리카노 (1000원) \n2.바닐라라떼 (1500원) \n3.초콜릿칩 플랫치노 (2000원) \n");
        printf("4.코카 콜라 (850원) \n5.사이다 (750원) \n6.환타 (750원) \n");
        printf("7.금액 추가 \n8.음료수 잔여 수량 및 총액확인 \n9.종료 \n");
        printf("잔여 금액 : %d원",money);
        printf("\n----------------------------------------\n");
        printf("메뉴 선택 : ");
        scanf("%d",&menu);

        switch(menu){
            case 1:
                printf("아메리카노를 선택했습니다.(1초만 기다려주세요) \n");
                if(money>=1000){
                    sleep(1);
                    if(item[0] == 0){
                        printf("재고 없습니다(2초뒤 메뉴로 돌아갑니다)");
                        sleep(2);
                        break;
                        }
                    printf("아메리카노 나왔습니다! \n");
                    printf("잔돈은 %d원 입니다 \n메뉴로 돌아갑니다(엔터를 쳐주세요)",money-1000);
                    money = money-1000;
                    item[0] -= 1;
                    total_money += 1000;
                }else{
                    printf("금액이 부족합니다. \n금액을 추가하시겠습니까?(Y:1/N:0) :");
                    scanf("%d",&add);
                    if(add == 1){
                        printf("얼마 금액을 추가하십니까? : ");
                        scanf("%d",&add_money);
                        printf("추가 되었습니다. 메뉴 선택 해주세요(엔터를 쳐주세요)");
                        money+=add_money;
                        }
                    if(add == 0){
                        printf("메뉴 선택으로 돌아갑니다(엔터를 쳐주세요)");
                    }
                }
                getchar();
                getchar();
                break;
            case 2:
                printf("바닐라라떼를 선택했습니다.(1초만 기다려주세요) \n");
                    if(money>=1500){
                        sleep(1);
                        if(item[1] == 0){
                            printf("재고 없습니다(2초뒤 메뉴로 돌아갑니다)");
                            sleep(2);
                            break;
                        }
                        printf("바닐라라떼 나왔습니다! \n");
                        printf("잔돈은 %d 입니다. \n메뉴로 돌아갑니다(엔터를 쳐주세요)",money-1500);
                        money = money-1500;
                        item[1] -= 1;
                        total_money += 1500;
                    }else{
                        printf("금액이 부족합니다. \n금액을 추가하시겠습니까?(Y:1/N:0) :");
                        scanf("%d",&add);
                        if(add == 1){
                            printf("얼마 금액을 추가하십니까? : ");
                            scanf("%d",&add_money);
                            printf("추가 되었습니다. 메뉴 선택 해주세요(엔터를 쳐주세요)");
                            money+=add_money;
                        }
                        if(add == 0){
                            printf("메뉴 선택으로 돌아갑니다(엔터를 쳐주세요)");
                        }
                    }
                getchar();
                getchar();
                break;
            case 3:
                printf("초콜릿칩 플랫치노 선택했습니다.(1초만 기다려주세요) \n");
                    if(money>=2000){
                        sleep(1);
                        if(item[2] == 0){
                            printf("재고 없습니다(2초뒤 메뉴로 돌아갑니다)");
                            sleep(2);
                            break;
                        }
                        printf("초콜릿칩 플랫치노 나왔습니다! \n");
                        printf("잔돈은 %d 입니다. \n메뉴로 돌아갑니다(엔터를 쳐주세요)",money-2000);
                        money = money-2000;
                        item[2] -= 1;
                        total_money += 2000;
                    }else{
                        printf("금액이 부족합니다. \n금액을 추가하시겠습니까?(Y:1/N:0) :");
                        scanf("%d",&add);
                        if(add == 1){
                            printf("얼마 금액을 추가하십니까? : ");
                            scanf("%d",&add_money);
                            printf("추가 되었습니다. 메뉴 선택 해주세요(엔터를 쳐주세요)");
                            money+=add_money;
                        }
                        if(add == 0){
                            printf("메뉴 선택으로 돌아갑니다(엔터를 쳐주세요)");
                        }
                    }
                getchar();
                getchar();
                break;
            case 4:
                printf("코카콜라를 선택했습니다.(1초만 기다려주세요) \n");
                    if(money>=850){
                        if(item[3] == 0){
                            printf("재고 없습니다(2초뒤 메뉴로 돌아갑니다)");
                            sleep(2);
                            break;
                        }
                        printf("코카콜라 나왔습니다! \n");
                        printf("잔돈은 %d 입니다. 감사합니다 ",money-850);
                        money = money-850;
                        item[3] -= 1;
                        total_money += 850;
                    }else{
                        printf("금액이 부족합니다. \n금액을 추가하시겠습니까?(Y:1/N:0) :");
                        scanf("%d",&add);
                        if(add == 1){
                            printf("얼마 금액을 추가하십니까? : ");
                            scanf("%d",&add_money);
                            printf("추가 되었습니다. 메뉴 선택 (엔터를 쳐주세요)");
                            money+=add_money;
                        }
                        if(add == 0){
                            printf("메뉴 선택으로 돌아갑니다(엔터를 쳐주세요)");
                        }
                    }
                getchar();
                getchar();
                break;
            case 5:
                printf("사이다를 선택했습니다.(1초만 기다려주세요) \n");
                    if(money>=750){
                        if(item[4] == 0){
                            printf("재고 없습니다(2초뒤 메뉴로 돌아갑니다)");
                            sleep(2);
                            break;
                        }
                        printf("사이다 나왔습니다! \n");
                        printf("잔돈은 %d 입니다 \n메뉴로 돌아갑니다(엔터를 쳐주세요)",money-750);
                        money = money-750;
                        item[4] -= 1;
                        total_money += 750;
                    }else{
                        printf("금액이 부족합니다. \n금액을 추가하시겠습니까?(Y:1/N:0) :");
                        scanf("%d",&add);
                        if(add == 1){
                            printf("얼마 금액을 추가하십니까? : ");
                            scanf("%d",&add_money);
                            printf("추가 되었습니다. 메뉴 선택 해주세요(엔터를 쳐주세요)");
                            money+=add_money;
                        }
                        if(add == 0){
                            printf("메뉴 선택으로 돌아갑니다(엔터를 쳐주세요)");
                        }
                    }
                getchar();
                getchar();
                break;
            case 6:
                printf("환타를 선택했습니다.(1초만 기다려주세요) \n");
                    if(money>=750){
                        if(item[5] == 0){
                            printf("재고 없습니다(2초뒤 메뉴로 돌아갑니다)");
                            sleep(2);
                            break;
                        }
                        printf("환타 나왔습니다! \n");
                        printf("잔돈은 %d 입니다 \n메뉴로 돌아갑니다(엔터를 쳐주세요)",money-750);
                        money = money-750;
                        item[5] -= 1;
                        total_money += 750;
                    }else{
                        printf("금액이 부족합니다. \n추가하시겠습니까?(Y:1/N:0) :");
                        printf("금액이 부족합니다. \n추가하시겠습니까?(Y:1/N:0) :");
                        scanf("%d",&add);
                        if(add == 1){
                            printf("얼마 금액을 추가하십니까? : ");
                            scanf("%d",&add_money);
                            printf("추가 되었습니다. 메뉴 선택 해주세요(엔터를 쳐주세요)");
                            money+=add_money;
                        }
                        if(add == 0){
                            printf("메뉴 선택으로 돌아갑니다(엔터를 쳐주세요)");
                        }
                    }
                getchar();
                getchar();
                break;
            case 7:
                printf("추가 하시겠습니까? (Y:1,N:0) :");
                scanf("%d",&add);
                    if(add == 1){
                        printf("얼마 금액을 추가하십니까? : ");
                        scanf("%d",&add_money);
                        printf("추가 되었습니다. 메뉴 선택 해주세요(엔터를 쳐주세요)");
                        money+=add_money;
                        }
                    if(add == 0){
                        printf("메뉴 선택으로 돌아갑니다(엔터를 쳐주세요)");
                    }
                getchar();
                getchar();
                break;
            case 8:
                printf("아메리카노 잔여수량:%d \n바닐라라떼 잔여수량:%d \n초콜릿칩 플랫치노 잔여수량:%d \n",item[0], item[1], item[2]);
                printf("콜라 잔여수량: %d \n사이다 잔여수량:%d \n환타 잔여수량:%d \n", item[3],  item[4], item[5]);
                printf("총액은 %d원 입니다.\n",total_money);
                printf("확인하였으면 엔터누르세요");
                getchar();
                getchar();
                break;
            case 9:
                flag=1;
                printf("자판기 이용을 종료합니다 반환금액은 %d원 입니다", money);
                break;

            default : printf("다시 선택해주세요");
        }
    }

    return 0;
}
