pub const Coordinate = struct {
    x: f32,
    y: f32,

    pub fn init(x_coord: f32, y_coord: f32) Coordinate {
        return .{
            .x = x_coord,
            .y = y_coord,
        };
    }
    pub fn score(self: Coordinate) usize {
        const distance = (self.x * self.x) + (self.y * self.y);

        if (distance <= 1.0) {
            return 10;
        }
        else if (distance <= 25.0) {
            return 5;
        }
        else if (distance <= 100.0) {
            return 1;
        }
        else return 0;
    }
};
