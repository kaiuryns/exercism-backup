pub const HighScores = struct {
    scores: []const i32,
    top_three: [3]i32 = .{0} ** 3,

    pub fn init(scores: []const i32) HighScores {
        var self = HighScores{ .scores = scores };

        for (scores) |score| {
            if (score > self.top_three[0]) {
                self.top_three[2] = self.top_three[1];
                self.top_three[1] = self.top_three[0];
                self.top_three[0] = score;
            } else if (score > self.top_three[1]) {
                self.top_three[2] = self.top_three[1];
                self.top_three[1] = score;
            } else if (score > self.top_three[2]) {
                self.top_three[2] = score;
            }
        }
        return self;
    }

    pub fn latest(self: *const HighScores) ?i32 {
        if (self.scores.len == 0) return null;
        return self.scores[self.scores.len - 1];
    }

    pub fn personalBest(self: *const HighScores) ?i32 {
        if (self.scores.len == 0) return null;
        return self.top_three[0];
    }

    pub fn personalTopThree(self: *const HighScores) []const i32 {
        const top_len = if (self.scores.len < 3) self.scores.len else 3;
        return self.top_three[0..top_len];
    }
};