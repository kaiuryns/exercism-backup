class LocomotiveEngineer
  def self.generate_list_of_wagons(*ids)
    ids
  end

  def self.fix_list_of_wagons(each_wagons_id, missing_wagons)
    a, b, c, *first = each_wagons_id
    [c, *missing_wagons, *first, a, b]
  end

  def self.add_missing_stops(route, **stops)
    {**route, stops: stops.values}
  end

  def self.extend_route_information(route, extra_info)
    {**route, **extra_info}
  end
end
