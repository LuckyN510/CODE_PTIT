import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Time> listTime = new ArrayList<Time>();
        for(int i = 0; i < n; i++){
            int hour = sc.nextInt();
            int minute = sc.nextInt();
            int second = sc.nextInt();
            Time time = new Time(hour, minute, second);
            listTime.add(time);
        }
        Collections.sort(listTime, new Comparator<Time>(){
            @Override
            public int compare(Time o1, Time o2){
                if(o1.getHour() != o2.getHour()) return o1.getHour() - o2.getHour();
                else if(o1.getMin() != o2.getMin()) return o1.getMin() - o2.getMin();
                return o1.getSec() - o2.getSec();
            }
        });
        for(Time x : listTime){
            System.out.println(x);
        }
    }
}