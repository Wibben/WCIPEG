import java.util.Scanner;

/**
 * Created by nick on 2016-03-05.
 */
public class avatarair {
    private static char[][] map;
    private static int height, width;
    private static int[][] direction = {
            {0, 1}, //east
            {-1, 0}, //north
            {1, 0}, //south
            {0, -1}, //west
    };

    private static String[] dirs = {">", "^", "v", "<"};
    private static int traverseMap (int time, int dir, int r, int c) {
        if (map[r][c] == '/') { //switches direction based on current tile
            if(dir==0) dir = 1;
            else if(dir==1) dir = 0;
            else if(dir==2) dir = 3;
            else if(dir==3) dir = 2;
        } else if (map[r][c] == '\\') {
            if(dir==0) dir = 2;
            else if(dir==1) dir = 3;
            else if(dir==2) dir = 0;
            else if(dir==3) dir = 1;
        }

        /*
        System.out.println("t = " + time);
        for (int i = 0; i < height ; i++) {
            for (int j = 0; j < width; j++) {
                if (i == r && j == c)
                    System.out.print(dirs[dir]);
                else
                    System.out.print(map[i][j]);
            }
            System.out.println();
        }
        System.out.println();
        
        Scanner scan = new Scanner(System.in);
        scan.nextLine();
        */

        r += direction[dir][0];
        c += direction[dir][1];

        time++;
        if (r >= height || //if out of maze, just return
                r < 0 ||
                c >= width ||
                c < 0){
            return time;
        } else {
            for (int i = 0; i < height; i++) { //reconfigure the maze
                for (int j = 0; j < width; j++) {
                    if (map[i][j] == '/') {
                        map[i][j] = '\\';
                    } else if (map[i][j] == '\\') {
                        map[i][j] = '/';
                    }
                }
            }
            return traverseMap(time, dir, r, c); //traverse the maze again
        }
    }
    public static void main (String[] args) {
        Scanner scan = new Scanner(System.in);
        height = scan.nextInt();
        width = scan.nextInt();
        map = new char[height][width];
        for (int i = 0 ; i < height ; i++){
            String row = scan.next();
            for (int j = 0 ; j < width ; j++) {
                map[i][j] = row.charAt(j);
            }
        }
        System.out.println(traverseMap(0, 0, 0, 0));
    }
}
