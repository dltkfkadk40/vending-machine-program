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

    printf("�ݾ��� �־��ּ��� : ");
    scanf("%d",&money);

    while(!flag){
        system("cls");

        printf("------------- ���Ǳ� ---------------------\n");
        printf("\n1.�Ƹ޸�ī�� (1000��) \n2.�ٴҶ�� (1500��) \n3.���ݸ�Ĩ �÷�ġ�� (2000��) \n");
        printf("4.��ī �ݶ� (850��) \n5.���̴� (750��) \n6.ȯŸ (750��) \n");
        printf("7.�ݾ� �߰� \n8.����� �ܿ� ���� �� �Ѿ�Ȯ�� \n9.���� \n");
        printf("�ܿ� �ݾ� : %d��",money);
        printf("\n----------------------------------------\n");
        printf("�޴� ���� : ");
        scanf("%d",&menu);

        switch(menu){
            case 1:
                printf("�Ƹ޸�ī�븦 �����߽��ϴ�.(1�ʸ� ��ٷ��ּ���) \n");
                if(money>=1000){
                    sleep(1);
                    if(item[0] == 0){
                        printf("��� �����ϴ�(2�ʵ� �޴��� ���ư��ϴ�)");
                        sleep(2);
                        break;
                        }
                    printf("�Ƹ޸�ī�� ���Խ��ϴ�! \n");
                    printf("�ܵ��� %d�� �Դϴ� \n�޴��� ���ư��ϴ�(���͸� ���ּ���)",money-1000);
                    money = money-1000;
                    item[0] -= 1;
                    total_money += 1000;
                }else{
                    printf("�ݾ��� �����մϴ�. \n�ݾ��� �߰��Ͻðڽ��ϱ�?(Y:1/N:0) :");
                    scanf("%d",&add);
                    if(add == 1){
                        printf("�� �ݾ��� �߰��Ͻʴϱ�? : ");
                        scanf("%d",&add_money);
                        printf("�߰� �Ǿ����ϴ�. �޴� ���� ���ּ���(���͸� ���ּ���)");
                        money+=add_money;
                        }
                    if(add == 0){
                        printf("�޴� �������� ���ư��ϴ�(���͸� ���ּ���)");
                    }
                }
                getchar();
                getchar();
                break;
            case 2:
                printf("�ٴҶ�󶼸� �����߽��ϴ�.(1�ʸ� ��ٷ��ּ���) \n");
                    if(money>=1500){
                        sleep(1);
                        if(item[1] == 0){
                            printf("��� �����ϴ�(2�ʵ� �޴��� ���ư��ϴ�)");
                            sleep(2);
                            break;
                        }
                        printf("�ٴҶ�� ���Խ��ϴ�! \n");
                        printf("�ܵ��� %d �Դϴ�. \n�޴��� ���ư��ϴ�(���͸� ���ּ���)",money-1500);
                        money = money-1500;
                        item[1] -= 1;
                        total_money += 1500;
                    }else{
                        printf("�ݾ��� �����մϴ�. \n�ݾ��� �߰��Ͻðڽ��ϱ�?(Y:1/N:0) :");
                        scanf("%d",&add);
                        if(add == 1){
                            printf("�� �ݾ��� �߰��Ͻʴϱ�? : ");
                            scanf("%d",&add_money);
                            printf("�߰� �Ǿ����ϴ�. �޴� ���� ���ּ���(���͸� ���ּ���)");
                            money+=add_money;
                        }
                        if(add == 0){
                            printf("�޴� �������� ���ư��ϴ�(���͸� ���ּ���)");
                        }
                    }
                getchar();
                getchar();
                break;
            case 3:
                printf("���ݸ�Ĩ �÷�ġ�� �����߽��ϴ�.(1�ʸ� ��ٷ��ּ���) \n");
                    if(money>=2000){
                        sleep(1);
                        if(item[2] == 0){
                            printf("��� �����ϴ�(2�ʵ� �޴��� ���ư��ϴ�)");
                            sleep(2);
                            break;
                        }
                        printf("���ݸ�Ĩ �÷�ġ�� ���Խ��ϴ�! \n");
                        printf("�ܵ��� %d �Դϴ�. \n�޴��� ���ư��ϴ�(���͸� ���ּ���)",money-2000);
                        money = money-2000;
                        item[2] -= 1;
                        total_money += 2000;
                    }else{
                        printf("�ݾ��� �����մϴ�. \n�ݾ��� �߰��Ͻðڽ��ϱ�?(Y:1/N:0) :");
                        scanf("%d",&add);
                        if(add == 1){
                            printf("�� �ݾ��� �߰��Ͻʴϱ�? : ");
                            scanf("%d",&add_money);
                            printf("�߰� �Ǿ����ϴ�. �޴� ���� ���ּ���(���͸� ���ּ���)");
                            money+=add_money;
                        }
                        if(add == 0){
                            printf("�޴� �������� ���ư��ϴ�(���͸� ���ּ���)");
                        }
                    }
                getchar();
                getchar();
                break;
            case 4:
                printf("��ī�ݶ� �����߽��ϴ�.(1�ʸ� ��ٷ��ּ���) \n");
                    if(money>=850){
                        if(item[3] == 0){
                            printf("��� �����ϴ�(2�ʵ� �޴��� ���ư��ϴ�)");
                            sleep(2);
                            break;
                        }
                        printf("��ī�ݶ� ���Խ��ϴ�! \n");
                        printf("�ܵ��� %d �Դϴ�. �����մϴ� ",money-850);
                        money = money-850;
                        item[3] -= 1;
                        total_money += 850;
                    }else{
                        printf("�ݾ��� �����մϴ�. \n�ݾ��� �߰��Ͻðڽ��ϱ�?(Y:1/N:0) :");
                        scanf("%d",&add);
                        if(add == 1){
                            printf("�� �ݾ��� �߰��Ͻʴϱ�? : ");
                            scanf("%d",&add_money);
                            printf("�߰� �Ǿ����ϴ�. �޴� ���� (���͸� ���ּ���)");
                            money+=add_money;
                        }
                        if(add == 0){
                            printf("�޴� �������� ���ư��ϴ�(���͸� ���ּ���)");
                        }
                    }
                getchar();
                getchar();
                break;
            case 5:
                printf("���̴ٸ� �����߽��ϴ�.(1�ʸ� ��ٷ��ּ���) \n");
                    if(money>=750){
                        if(item[4] == 0){
                            printf("��� �����ϴ�(2�ʵ� �޴��� ���ư��ϴ�)");
                            sleep(2);
                            break;
                        }
                        printf("���̴� ���Խ��ϴ�! \n");
                        printf("�ܵ��� %d �Դϴ� \n�޴��� ���ư��ϴ�(���͸� ���ּ���)",money-750);
                        money = money-750;
                        item[4] -= 1;
                        total_money += 750;
                    }else{
                        printf("�ݾ��� �����մϴ�. \n�ݾ��� �߰��Ͻðڽ��ϱ�?(Y:1/N:0) :");
                        scanf("%d",&add);
                        if(add == 1){
                            printf("�� �ݾ��� �߰��Ͻʴϱ�? : ");
                            scanf("%d",&add_money);
                            printf("�߰� �Ǿ����ϴ�. �޴� ���� ���ּ���(���͸� ���ּ���)");
                            money+=add_money;
                        }
                        if(add == 0){
                            printf("�޴� �������� ���ư��ϴ�(���͸� ���ּ���)");
                        }
                    }
                getchar();
                getchar();
                break;
            case 6:
                printf("ȯŸ�� �����߽��ϴ�.(1�ʸ� ��ٷ��ּ���) \n");
                    if(money>=750){
                        if(item[5] == 0){
                            printf("��� �����ϴ�(2�ʵ� �޴��� ���ư��ϴ�)");
                            sleep(2);
                            break;
                        }
                        printf("ȯŸ ���Խ��ϴ�! \n");
                        printf("�ܵ��� %d �Դϴ� \n�޴��� ���ư��ϴ�(���͸� ���ּ���)",money-750);
                        money = money-750;
                        item[5] -= 1;
                        total_money += 750;
                    }else{
                        printf("�ݾ��� �����մϴ�. \n�߰��Ͻðڽ��ϱ�?(Y:1/N:0) :");
                        printf("�ݾ��� �����մϴ�. \n�߰��Ͻðڽ��ϱ�?(Y:1/N:0) :");
                        scanf("%d",&add);
                        if(add == 1){
                            printf("�� �ݾ��� �߰��Ͻʴϱ�? : ");
                            scanf("%d",&add_money);
                            printf("�߰� �Ǿ����ϴ�. �޴� ���� ���ּ���(���͸� ���ּ���)");
                            money+=add_money;
                        }
                        if(add == 0){
                            printf("�޴� �������� ���ư��ϴ�(���͸� ���ּ���)");
                        }
                    }
                getchar();
                getchar();
                break;
            case 7:
                printf("�߰� �Ͻðڽ��ϱ�? (Y:1,N:0) :");
                scanf("%d",&add);
                    if(add == 1){
                        printf("�� �ݾ��� �߰��Ͻʴϱ�? : ");
                        scanf("%d",&add_money);
                        printf("�߰� �Ǿ����ϴ�. �޴� ���� ���ּ���(���͸� ���ּ���)");
                        money+=add_money;
                        }
                    if(add == 0){
                        printf("�޴� �������� ���ư��ϴ�(���͸� ���ּ���)");
                    }
                getchar();
                getchar();
                break;
            case 8:
                printf("�Ƹ޸�ī�� �ܿ�����:%d \n�ٴҶ�� �ܿ�����:%d \n���ݸ�Ĩ �÷�ġ�� �ܿ�����:%d \n",item[0], item[1], item[2]);
                printf("�ݶ� �ܿ�����: %d \n���̴� �ܿ�����:%d \nȯŸ �ܿ�����:%d \n", item[3],  item[4], item[5]);
                printf("�Ѿ��� %d�� �Դϴ�.\n",total_money);
                printf("Ȯ���Ͽ����� ���ʹ�������");
                getchar();
                getchar();
                break;
            case 9:
                flag=1;
                printf("���Ǳ� �̿��� �����մϴ� ��ȯ�ݾ��� %d�� �Դϴ�", money);
                break;

            default : printf("�ٽ� �������ּ���");
        }
    }

    return 0;
}
